// rea decompile_all
// name: System.Runtime.Serialization.FormatterServices$$GetParentTypes
// address: 0x74ac548
// body: available
// range: 0x74ac548-0x74ac93b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ac87c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ac8a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ac8a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ac924 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ac930 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ac938 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Runtime_Serialization_FormatterServices__GetParentTypes
               (long *param_1,long *param_2,uint *param_3)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  bool bVar12;
  uint uVar13;
  
  if ((DAT_095213f9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091804c0);
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_095213f9 = 1;
  }
  *param_2 = 0;
  thunk_FUN_03f5d7b8(param_2,0);
  *param_3 = 0;
  lVar6 = DAT_095353e8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar4 = (long *)System_Type__GetTypeFromHandle(lVar6 + 0x20,0);
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
        DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar4);
    }
  }
  bVar12 = true;
  plVar8 = param_1;
  while( true ) {
    if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918a400);
    }
    uVar5 = System_RuntimeType__op_Inequality(plVar8,plVar4,0);
    if ((uVar5 & 1) == 0) {
      return bVar12;
    }
    if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_RuntimeType__op_Equality(plVar8,0,0);
    if ((uVar5 & 1) != 0) {
      uVar9 = thunk_FUN_03fc39d4(&DAT_092111b8);
      if (param_1 == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = System_Type__GetType(param_1,0);
      }
      uVar9 = System_String__Format(uVar9,param_1,uVar10,0);
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar10 = thunk_FUN_03f9944c();
      System_InvalidOperationException___ctor(uVar10,uVar9,0);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091ccf78);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar10,uVar9);
    }
    if (plVar8 == (long *)0x0) break;
    uVar5 = System_Type__get_IsInterface(plVar8,0);
    if ((uVar5 & 1) == 0) {
      lVar6 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      if (bVar12) {
        if (0 < (int)*param_3) {
          uVar13 = 0;
          do {
            lVar11 = *param_2;
            if (lVar11 == 0) goto LAB_074ac8a4;
            if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_074ac8a8;
            plVar7 = *(long **)(lVar11 + (long)(int)uVar13 * 8 + 0x20);
            if (((plVar7 == (long *)0x0) ||
                (lVar11 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0)),
                lVar11 == 0)) || (lVar6 == 0)) goto LAB_074ac8a4;
            if (*(int *)(lVar11 + 0x10) == *(int *)(lVar6 + 0x10)) {
              sVar1 = System_String__get_Chars(lVar11,0,0);
              sVar2 = System_String__get_Chars(lVar6,0,0);
              if ((sVar1 == sVar2) &&
                 (uVar5 = System_String__op_Equality(lVar6,lVar11,0), (uVar5 & 1) != 0))
              goto LAB_074ac75c;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)*param_3);
        }
        bVar12 = true;
      }
      else {
LAB_074ac75c:
        bVar12 = false;
      }
      plVar7 = (long *)*param_2;
      uVar13 = *param_3;
      if ((plVar7 == (long *)0x0) || (uVar13 == *(uint *)(plVar7 + 3))) {
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Math__Max(uVar13 << 1,0xc,0);
        lVar6 = FUN_03f5c394(DAT_091804c0,uVar3);
        if (*param_2 != 0) {
          System_Array__Copy(*param_2,0,lVar6,0,*param_3,0);
        }
        *param_2 = lVar6;
        thunk_FUN_03f5d7b8(param_2,lVar6);
        uVar13 = *param_3;
        plVar7 = (long *)*param_2;
        *param_3 = uVar13 + 1;
        if (plVar7 == (long *)0x0) break;
      }
      else {
        *param_3 = uVar13 + 1;
      }
      lVar6 = thunk_FUN_03f99350(plVar8,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar6 == 0) {
        uVar9 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar9,0);
      }
      if (*(uint *)(plVar7 + 3) <= uVar13) {
LAB_074ac8a8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar7[(long)(int)uVar13 + 4] = (long)plVar8;
      thunk_FUN_03f5d7b8(plVar7 + (long)(int)uVar13 + 4,plVar8);
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x8a8))(plVar8,*(undefined8 *)(*plVar8 + 0x8b0));
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
          DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar8);
      }
    }
  }
LAB_074ac8a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

