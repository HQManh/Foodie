// rea decompile_all
// name: System.RuntimeType$$GetField
// address: 0x75f3558
// body: available
// range: 0x75f3558-0x75f3843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f37b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f37bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f380c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f3840 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_RuntimeType__GetField(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  undefined4 local_50;
  undefined1 local_4c [4];
  long local_48;
  
  local_48 = param_2;
  if ((DAT_09521f48 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521f48 = 1;
  }
  local_4c[0] = 0;
  local_50 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar8 = thunk_FUN_03f9944c();
    System_ArgumentNullException___ctor(uVar8,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091d8278);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar9);
  }
  if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_RuntimeType__FilterHelper(param_3,&local_48,local_4c,&local_50);
  lVar3 = System_RuntimeType__GetFields_internal(param_1,local_48,param_3,local_50,param_1);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if ((int)uVar1 < 1) {
      plVar10 = (long *)0x0;
    }
    else {
      uVar13 = 0;
      uVar12 = 0;
      plVar11 = (long *)0x0;
      do {
        if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar10 = *(long **)(lVar3 + (long)(int)uVar13 * 8 + 0x20);
        if (plVar10 == (long *)0x0) goto LAB_075f37b8;
        uVar1 = System_Reflection_RuntimeFieldInfo__get_BindingFlags(plVar10,0);
        uVar2 = System_Reflection_RuntimeFieldInfo__get_BindingFlags(plVar10,0);
        if ((uVar1 & (param_3 ^ 2)) == uVar2) {
          uVar4 = System_Reflection_FieldInfo__op_Inequality(plVar11,0,0);
          if ((uVar4 & 1) != 0) {
            lVar5 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
            if (plVar11 == (long *)0x0) goto LAB_075f37b8;
            lVar6 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
            if (lVar5 == lVar6) goto LAB_075f37c0;
            lVar5 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
            if (lVar5 == 0) goto LAB_075f37b8;
            uVar4 = System_Type__get_IsInterface(lVar5,0);
            if ((uVar4 & 1) != 0) {
              lVar5 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
              if (lVar5 == 0) goto LAB_075f37b8;
              uVar1 = System_Type__get_IsInterface(lVar5,0);
              uVar12 = uVar1 | uVar12;
            }
          }
          uVar4 = System_Reflection_FieldInfo__op_Equality(plVar11,0,0);
          if ((uVar4 & 1) == 0) {
            plVar7 = (long *)(**(code **)(*plVar10 + 0x1c8))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
            if ((plVar11 == (long *)0x0) ||
               (uVar8 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0)),
               plVar7 == (long *)0x0)) goto LAB_075f37b8;
            uVar4 = (**(code **)(*plVar7 + 0x2a8))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x2b0));
            if ((uVar4 & 1) == 0) {
              lVar5 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
              if (lVar5 == 0) goto LAB_075f37b8;
              uVar4 = System_Type__get_IsInterface(lVar5,0);
              if ((uVar4 & 1) == 0) goto LAB_075f374c;
            }
          }
        }
        else {
LAB_075f374c:
          plVar10 = plVar11;
        }
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar13 = uVar13 + 1;
        plVar11 = plVar10;
      } while ((int)uVar13 < (int)uVar1);
      if ((uVar12 & 1) != 0) {
        if ((plVar10 == (long *)0x0) ||
           (lVar3 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0)),
           lVar3 == 0)) goto LAB_075f37b8;
        uVar4 = System_Type__get_IsInterface(lVar3,0);
        if ((uVar4 & 1) != 0) {
LAB_075f37c0:
          uVar8 = thunk_FUN_03fc39d4(&DAT_091fb838);
          uVar8 = System_Environment__GetResourceString(uVar8,0);
          thunk_FUN_03fc39d4(&DAT_09181088);
          uVar9 = thunk_FUN_03f9944c();
          System_Reflection_AmbiguousMatchException___ctor(uVar9,uVar8,0);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091d8278);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar9,uVar8);
        }
      }
    }
    return plVar10;
  }
LAB_075f37b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

