// rea decompile_all
// name: System.Runtime.Serialization.ObjectManager$$DoValueTypeFixup
// address: 0x74af64c
// body: available
// range: 0x74af64c-0x74afb97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74afb78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74afb7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74afb88 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74afb8c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74afb94 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Serialization_ObjectManager__DoValueTypeFixup
          (undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09521412 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917ff08);
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_0918a3a8);
    FUN_03f5c2a4(&DAT_0918a950);
    FUN_03f5c2a4(&DAT_09225370);
    DAT_09521412 = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  plVar2 = (long *)FUN_03f5c394(DAT_0917ff08,4);
  if (param_3 != 0) {
    plVar12 = *(long **)(param_3 + 0x10);
    uVar3 = System_Runtime_Serialization_ObjectHolder__get_RequiresValueTypeFixup(param_3,0);
    if ((uVar3 & 1) == 0) {
      uVar11 = 0;
LAB_074af8ac:
      lVar4 = param_3;
      lVar13 = 0;
    }
    else {
      uVar11 = 0;
      plVar10 = plVar2;
      do {
        if (plVar10 == (long *)0x0) goto LAB_074afb78;
        plVar2 = plVar10;
        if ((int)plVar10[3] <= (int)(uVar11 + 1)) {
          plVar2 = (long *)FUN_03f5c394(DAT_0917ff08,(int)plVar10[3] << 1);
          System_Array__Copy(plVar10,plVar2,(int)plVar10[3],0);
        }
        lVar13 = *(long *)(param_3 + 0x58);
        if (lVar13 == 0) goto LAB_074afb78;
        plVar12 = *(long **)(param_3 + 0x10);
        uVar3 = System_Reflection_FieldInfo__op_Inequality(*(undefined8 *)(lVar13 + 0x18),0,0);
        if ((uVar3 & 1) == 0) {
          lVar4 = System_Runtime_Serialization_ObjectManager__FindObjectHolder
                            (param_1,*(undefined8 *)(lVar13 + 0x10));
          if (lVar4 == 0) goto LAB_074afb78;
          lVar13 = *(long *)(lVar13 + 0x20);
          goto LAB_074af8cc;
        }
        plVar10 = *(long **)(lVar13 + 0x18);
        lVar4 = System_Runtime_Serialization_ObjectManager__FindObjectHolder
                          (param_1,*(undefined8 *)(lVar13 + 0x10));
        if (lVar4 == 0) goto LAB_074afb78;
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_074af8ac;
        if (plVar10 == (long *)0x0) goto LAB_074afb78;
        uVar5 = (**(code **)(*plVar10 + 0x268))(plVar10,*(undefined8 *)(*plVar10 + 0x270));
        uVar5 = System_Nullable__GetUnderlyingType(uVar5,0);
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar3 = System_Type__op_Inequality(uVar5,0,0);
        if ((uVar3 & 1) == 0) {
          if (plVar2 == (long *)0x0) goto LAB_074afb78;
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar10 + 0x268))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x270));
          if ((plVar6 == (long *)0x0) ||
             (lVar13 = (**(code **)(*plVar6 + 0x6f8))
                                 (plVar6,DAT_09225370,0x24,*(undefined8 *)(*plVar6 + 0x700)),
             plVar2 == (long *)0x0)) goto LAB_074afb78;
          if ((lVar13 != 0) &&
             (lVar7 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
          goto LAB_074afb80;
          if (*(uint *)(plVar2 + 3) <= uVar11) goto LAB_074afb7c;
          plVar2[(long)(int)uVar11 + 4] = lVar13;
          thunk_FUN_03f5d7b8(plVar2 + (long)(int)uVar11 + 4,lVar13);
          uVar11 = uVar11 + 1;
        }
        lVar13 = thunk_FUN_03f99350(plVar10,*(undefined8 *)(*plVar2 + 0x40));
        if (lVar13 == 0) goto LAB_074afb80;
        if (*(uint *)(plVar2 + 3) <= uVar11) goto LAB_074afb7c;
        plVar2[(long)(int)uVar11 + 4] = (long)plVar10;
        thunk_FUN_03f5d7b8(plVar2 + (long)(int)uVar11 + 4,plVar10);
        uVar11 = uVar11 + 1;
        uVar3 = System_Runtime_Serialization_ObjectHolder__get_RequiresValueTypeFixup(lVar4,0);
        param_3 = lVar4;
        plVar10 = plVar2;
      } while ((uVar3 & 1) != 0);
      lVar13 = 0;
    }
LAB_074af8cc:
    plVar10 = *(long **)(lVar4 + 0x10);
    if (plVar10 != (long *)0x0) {
      if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) !=
          DAT_09535478)) {
        plVar12 = plVar10;
      }
    }
    if (uVar11 == 0) {
      uVar3 = System_Reflection_FieldInfo__op_Inequality(param_2,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_09184940 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Runtime_Serialization_FormatterServices__SerializationSetValue
                  (param_2,plVar12,param_4);
      }
    }
    else {
      plVar10 = (long *)FUN_03f5c394(DAT_0917ff08,uVar11);
      if (0 < (int)uVar11) {
        if (plVar2 == (long *)0x0) goto LAB_074afb78;
        uVar3 = 0;
        uVar14 = (ulong)uVar11;
        lVar7 = 0x20;
        do {
          uVar11 = uVar11 - 1;
          if (*(uint *)(plVar2 + 3) <= uVar11) {
LAB_074afb7c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar6 = (long *)plVar2[(long)(int)uVar11 + 4];
          if (plVar6 == (long *)0x0) {
            uVar8 = System_Reflection_FieldInfo__op_Equality(0,0,0);
            if ((uVar8 & 1) == 0) goto LAB_074afb78;
          }
          else {
            plVar1 = plVar6;
            if (*plVar6 != DAT_0918a950) {
              plVar1 = (long *)0x0;
            }
            uVar8 = System_Reflection_FieldInfo__op_Equality(plVar1,0,0);
            if ((uVar8 & 1) == 0) {
              if (plVar1 == (long *)0x0) goto LAB_074afb78;
              plVar6 = (long *)plVar1[2];
            }
          }
          if (plVar10 == (long *)0x0) goto LAB_074afb78;
          if ((plVar6 != (long *)0x0) &&
             (lVar9 = thunk_FUN_03f99350(plVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
LAB_074afb80:
            uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,0);
          }
          if (*(uint *)(plVar10 + 3) <= uVar3) goto LAB_074afb7c;
          plVar10[uVar3 + 4] = (long)plVar6;
          thunk_FUN_03f5d7b8((long)plVar10 + lVar7,plVar6);
          uVar3 = uVar3 + 1;
          lVar7 = lVar7 + 8;
        } while (uVar14 != uVar3);
      }
      System_TypedReference__MakeTypedReference(&local_80,plVar12,plVar10,0);
      uStack_98 = uStack_78;
      local_a0 = local_80;
      local_90 = local_70;
      uVar3 = System_Reflection_FieldInfo__op_Inequality(param_2,0,0);
      if ((uVar3 & 1) == 0) {
        uStack_b8 = uStack_98;
        local_c0 = local_a0;
        local_b0 = local_90;
        System_TypedReference__SetTypedReference(&local_c0,param_4,0);
      }
      else {
        if (param_2 == (long *)0x0) goto LAB_074afb78;
        lVar7 = *param_2;
        if ((*(byte *)(lVar7 + 0x130) < *(byte *)(DAT_0918a3a8 + 0x130)) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_0918a3a8 + 0x130) * 8 + -8) !=
            DAT_0918a3a8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(param_2,DAT_0918a3a8,param_4);
        }
        uStack_78 = uStack_98;
        local_80 = local_a0;
        local_70 = local_90;
        (**(code **)(lVar7 + 0x328))(param_2,&local_80,param_4,*(undefined8 *)(lVar7 + 0x330));
      }
    }
    if ((lVar13 != 0) && (plVar2 = *(long **)(lVar4 + 0x10), plVar2 != (long *)0x0)) {
      if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) !=
          DAT_09535478)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      System_Array__SetValue(plVar2,plVar12,lVar13,0);
    }
    return 1;
  }
LAB_074afb78:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

