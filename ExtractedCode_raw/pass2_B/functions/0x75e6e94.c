// rea decompile_all
// name: System.DefaultBinder$$BindToField
// address: 0x75e6e94
// body: available
// range: 0x75e6e94-0x75e731b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e7244 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e7250 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e7258 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e72a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e72ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e72b8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e72c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e7318 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_DefaultBinder__BindToField(undefined8 param_1,uint param_2,long param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  uint uVar13;
  uint uVar14;
  
  if ((DAT_09521ee1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183868);
    FUN_03f5c2a4(&DAT_09183f58);
    FUN_03f5c2a4(&DAT_0917ff08);
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521ee1 = 1;
  }
  if (param_3 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_0921f240);
    System_ArgumentNullException___ctor(uVar5,uVar8,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091c8248);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar8);
  }
  lVar3 = System_Array__Clone(param_3,0);
  uVar5 = DAT_0917ff08;
  if (lVar3 == 0) {
    if (((param_2 >> 0xb & 1) != 0) && (param_4 != 0)) {
      System_Object__GetType(param_4,0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
LAB_075e72ac:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar4 = (long *)thunk_FUN_03f99350(lVar3,DAT_0917ff08);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(lVar3,uVar5);
  }
  if ((param_2 >> 0xb & 1) == 0) {
LAB_075e6f34:
    uVar11 = 0;
  }
  else {
    if (param_4 == 0) goto LAB_075e72ac;
    uVar5 = System_Object__GetType(param_4,0);
    uVar11 = *(uint *)(plVar4 + 3);
    plVar12 = plVar4 + 4;
    if ((int)uVar11 < 1) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      uVar14 = 0;
      do {
        if (uVar11 <= uVar14) goto LAB_075e7244;
        plVar6 = (long *)plVar4[(long)(int)uVar14 + 4];
        if (plVar6 == (long *)0x0) goto LAB_075e72ac;
        plVar6 = (long *)(**(code **)(*plVar6 + 0x268))(plVar6,*(undefined8 *)(*plVar6 + 0x270));
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar7 = System_Type__op_Equality(plVar6,uVar5,0);
        if ((uVar7 & 1) == 0) {
          if (*(int *)(DAT_09183f58 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (**(long **)(DAT_09183f58 + 0xb8) == param_4) {
            if (plVar6 == (long *)0x0) goto LAB_075e72ac;
            uVar7 = System_Type__get_IsClass(plVar6,0);
            if ((uVar7 & 1) != 0) goto LAB_075e7048;
          }
          lVar3 = DAT_095353e8;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = System_Type__GetTypeFromHandle(lVar3 + 0x20,0);
          uVar7 = System_Type__op_Equality(plVar6,uVar8,0);
          if ((uVar7 & 1) != 0) goto LAB_075e7048;
          if (plVar6 == (long *)0x0) goto LAB_075e72ac;
          uVar7 = System_Type__get_IsPrimitive(plVar6,0);
          if ((uVar7 & 1) == 0) {
            uVar7 = (**(code **)(*plVar6 + 0x2b8))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x2c0));
          }
          else {
            if (*(int *)(DAT_09183868 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8
                         ) != DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar6);
            }
            uVar7 = System_DefaultBinder__CanConvertPrimitiveObjectToType(param_4,plVar6);
          }
          if ((uVar7 & 1) != 0) goto LAB_075e7048;
        }
        else {
LAB_075e7048:
          uVar11 = *(uint *)(plVar4 + 3);
          if (uVar11 <= uVar14) goto LAB_075e7244;
          lVar3 = plVar4[(long)(int)uVar14 + 4];
          if (lVar3 != 0) {
            lVar9 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40));
            if (lVar9 == 0) {
              uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar5,0);
            }
            uVar11 = *(uint *)(plVar4 + 3);
          }
          if (uVar11 <= uVar13) goto LAB_075e7244;
          lVar9 = (long)(int)uVar13;
          lVar10 = (long)(int)uVar13;
          uVar13 = uVar13 + 1;
          plVar4[lVar9 + 4] = lVar3;
          thunk_FUN_03f5d7b8(plVar12 + lVar10,lVar3);
        }
        uVar11 = *(uint *)(plVar4 + 3);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar11);
    }
    if (uVar13 == 1) {
      if (uVar11 == 0) goto LAB_075e7244;
      goto LAB_075e7224;
    }
    if (uVar13 == 0) {
      uVar5 = thunk_FUN_03fc39d4(&DAT_09202900);
      uVar8 = System_Environment__GetResourceString(uVar5,0);
      thunk_FUN_03fc39d4(&DAT_091882b0);
      uVar5 = thunk_FUN_03f9944c();
      System_MissingFieldException___ctor(uVar5,uVar8,0);
LAB_075e7304:
      uVar8 = thunk_FUN_03fc39d4(&DAT_091c8248);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar8);
    }
    if ((int)uVar13 < 2) goto LAB_075e6f34;
    lVar3 = 0;
    uVar11 = 0;
    bVar1 = false;
    do {
      if (((uint)plVar4[3] <= uVar11) || ((plVar4[3] & 0xffffffffU) <= lVar3 + 1U))
      goto LAB_075e7244;
      lVar10 = plVar4[lVar3 + 5];
      lVar9 = plVar4[(long)(int)uVar11 + 4];
      if (*(int *)(DAT_09183868 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System_DefaultBinder__FindMostSpecificField(lVar9,lVar10);
      if (iVar2 == 0) {
        bVar1 = true;
      }
      else if (iVar2 == 2) {
        bVar1 = false;
        uVar11 = (int)lVar3 + 1;
      }
      lVar3 = lVar3 + 1;
    } while ((ulong)uVar13 - 1 != lVar3);
    if (bVar1) {
      uVar5 = thunk_FUN_03fc39d4(&DAT_091fb838);
      uVar8 = System_Environment__GetResourceString(uVar5,0);
      thunk_FUN_03fc39d4(&DAT_09181088);
      uVar5 = thunk_FUN_03f9944c();
      System_Reflection_AmbiguousMatchException___ctor(uVar5,uVar8,0);
      goto LAB_075e7304;
    }
  }
  if (*(uint *)(plVar4 + 3) <= uVar11) {
LAB_075e7244:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar12 = plVar4 + (long)(int)uVar11 + 4;
LAB_075e7224:
  return *plVar12;
}

