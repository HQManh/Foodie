// rea decompile_all
// name: System.TypedReference$$MakeTypedReference
// address: 0x75f98c0
// body: available
// range: 0x75f98c0-0x75f9ce7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f9b88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f9b90 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f9b94 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f9c34 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f9c9c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TypedReference__MakeTypedReference(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_09521f76 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801c8);
    FUN_03f5c2a4(&DAT_0918a3a8);
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521f76 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    puVar6 = &DAT_09223c10;
  }
  else {
    if (param_3 != 0) {
      if (*(long *)(param_3 + 0x18) == 0) {
        uVar5 = thunk_FUN_03fc39d4(&DAT_091fbf08);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar3 = thunk_FUN_03f9944c();
        uVar7 = thunk_FUN_03fc39d4(&DAT_0921b810);
        System_ArgumentException___ctor(uVar3,uVar5,uVar7,0);
LAB_075f9c20:
        uVar5 = thunk_FUN_03fc39d4(&DAT_091dc618);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,uVar5);
      }
      lVar1 = FUN_03f5c394(DAT_091801c8);
      plVar2 = (long *)FUN_03f6c2d0(param_2);
      if (plVar2 != (long *)0x0) {
        if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
            DAT_0918a400)) {
LAB_075f9b8c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar2);
        }
      }
      if (0 < (int)*(ulong *)(param_3 + 0x18)) {
        uVar10 = 0;
        uVar8 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
        do {
          if (uVar8 <= uVar10) goto LAB_075f9b94;
          plVar9 = *(long **)(param_3 + 0x20 + uVar10 * 8);
          if (plVar9 == (long *)0x0) {
LAB_075f99e0:
            plVar9 = (long *)0x0;
          }
          else {
            if (*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_0918a3a8 + 0x130)) goto LAB_075f99e0;
            if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_0918a3a8 + 0x130) * 8 + -8
                         ) != DAT_0918a3a8) {
              plVar9 = (long *)0x0;
            }
          }
          uVar8 = System_Reflection_FieldInfo__op_Equality(plVar9,0,0);
          if ((uVar8 & 1) != 0) {
            puVar4 = &DAT_09202940;
LAB_075f9bb8:
            uVar5 = thunk_FUN_03fc39d4(puVar4);
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar3 = thunk_FUN_03f9944c();
            System_ArgumentException___ctor(uVar3,uVar5,0);
            goto LAB_075f9c20;
          }
          if (plVar9 == (long *)0x0) goto LAB_075f9b88;
          uVar8 = System_Reflection_FieldInfo__get_IsStatic(plVar9,0);
          if ((uVar8 & 1) != 0) {
            puVar4 = &DAT_092028f0;
            goto LAB_075f9bb8;
          }
          uVar3 = System_Reflection_RuntimeFieldInfo__GetDeclaringTypeInternal(plVar9,0);
          if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918a400);
          }
          uVar8 = System_RuntimeType__op_Inequality(plVar2,uVar3,0);
          if ((uVar8 & 1) != 0) {
            uVar3 = System_Reflection_RuntimeFieldInfo__GetDeclaringTypeInternal(plVar9,0);
            if (plVar2 == (long *)0x0) goto LAB_075f9b88;
            uVar8 = (**(code **)(*plVar2 + 0x2a8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x2b0));
            if ((uVar8 & 1) != 0) goto LAB_075f9a88;
            puVar4 = &DAT_09202938;
LAB_075f9bf8:
            uVar5 = thunk_FUN_03fc39d4(puVar4);
            thunk_FUN_03fc39d4(&DAT_091882c0);
            uVar3 = thunk_FUN_03f9944c();
            System_MissingMemberException___ctor(uVar3,uVar5,0);
            goto LAB_075f9c20;
          }
LAB_075f9a88:
          plVar2 = (long *)(**(code **)(*plVar9 + 0x268))(plVar9,*(undefined8 *)(*plVar9 + 0x270));
          if (plVar2 == (long *)0x0) {
LAB_075f9b88:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
             (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8)
              != DAT_0918a400)) goto LAB_075f9b8c;
          uVar8 = System_Type__get_IsPrimitive(plVar2,0);
          if ((uVar8 & 1) != 0) {
            puVar4 = &DAT_092113e0;
            goto LAB_075f9bb8;
          }
          if (((long)uVar10 < (long)(*(int *)(param_3 + 0x18) + -1)) &&
             (uVar8 = System_Type__get_IsValueType(plVar2,0), (uVar8 & 1) == 0)) {
            puVar4 = &DAT_092113d8;
            goto LAB_075f9bf8;
          }
          uVar3 = (**(code **)(*plVar9 + 0x2e8))(plVar9,*(undefined8 *)(*plVar9 + 0x2f0));
          if (lVar1 == 0) goto LAB_075f9b88;
          if (*(uint *)(lVar1 + 0x18) <= uVar10) {
LAB_075f9b94:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined8 *)(lVar1 + 0x20 + uVar10 * 8) = uVar3;
          uVar10 = uVar10 + 1;
          uVar8 = (ulong)*(uint *)(param_3 + 0x18);
        } while ((long)uVar10 < (long)(int)*(uint *)(param_3 + 0x18));
      }
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      FUN_03f7353c(&local_78,param_2,lVar1,plVar2);
      param_1[1] = uStack_70;
      *param_1 = local_78;
      param_1[2] = local_68;
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    puVar6 = (undefined8 *)&DAT_0921b810;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar6);
  System_ArgumentNullException___ctor(uVar3,uVar5,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091dc618);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar5);
}

