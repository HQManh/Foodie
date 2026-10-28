// rea decompile_all
// name: System.Runtime.Serialization.ObjectManager$$RegisterObject
// address: 0x74b06d8
// body: available
// range: 0x74b06d8-0x74b0c97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b0b90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b0b98 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b0be0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b0c48 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b0c94 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_ObjectManager__RegisterObject
               (long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               long *param_6,long param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  long *plVar13;
  undefined8 local_68;
  
  if ((DAT_09521415 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183a78);
    FUN_03f5c2a4(&DAT_09184518);
    FUN_03f5c2a4(&DAT_091859f8);
    FUN_03f5c2a4(&DAT_09186790);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09172338);
    FUN_03f5c2a4(&DAT_09188af0);
    FUN_03f5c2a4(&DAT_0918a3a8);
    FUN_03f5c2a4(&DAT_0918a950);
    DAT_09521415 = 1;
  }
  local_68 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_092201e0);
    System_ArgumentNullException___ctor(uVar3,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d4f80);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar6);
  }
  if (param_3 < 1) {
    uVar3 = thunk_FUN_03fc39d4(&DAT_09220218);
    uVar3 = System_Environment__GetResourceString(uVar3,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar8 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09220210);
    System_ArgumentOutOfRangeException___ctor(uVar8,uVar6,uVar3,0);
    goto LAB_074b0c80;
  }
  uVar2 = System_Reflection_MemberInfo__op_Inequality(param_6,0,0);
  if ((uVar2 & 1) == 0) {
LAB_074b0800:
    if (param_1[8] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = System_Object__GetType(param_2,0);
      plVar13 = (long *)param_1[8];
      if (plVar13 == (long *)0x0) goto LAB_074b0b90;
      lVar10 = *plVar13;
      lVar9 = param_1[9];
      lVar5 = param_1[10];
      uVar2 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar2 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_09186790) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_074b0880;
          }
          uVar2 = uVar2 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09186790,0);
LAB_074b0880:
      uVar3 = (*(code *)*puVar4)(plVar13,uVar3,lVar9,lVar5,&local_68,puVar4[1]);
    }
    lVar5 = thunk_FUN_03f99350(param_2,DAT_091859f8);
    lVar9 = DAT_091859f8;
    if (lVar5 != 0) {
      plVar13 = (long *)thunk_FUN_03f99350(param_2,DAT_091859f8);
      lVar5 = param_2;
      if (plVar13 == (long *)0x0) goto LAB_074b0c44;
      uVar6 = thunk_FUN_03f9944c(DAT_09183a78);
      lVar9 = *plVar13;
      uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar2 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091859f8) {
            lVar9 = lVar9 + (long)*piVar12 * 0x10 + 0x138;
            goto LAB_074b0930;
          }
          uVar2 = uVar2 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar2 != 0);
      }
      lVar9 = FUN_03f95da8(plVar13,DAT_091859f8,0);
LAB_074b0930:
      System_Runtime_Serialization_DeserializationEventHandler___ctor
                (uVar6,plVar13,*(undefined8 *)(lVar9 + 8));
      (**(code **)(*param_1 + 0x1d8))(param_1,uVar6,*(undefined8 *)(*param_1 + 0x1e0));
    }
    if ((param_7 == 0) || (lVar5 = System_Array__Clone(param_7,0), lVar9 = DAT_091801b8, lVar5 == 0)
       ) {
      lVar10 = 0;
    }
    else {
      lVar10 = thunk_FUN_03f99350(lVar5,DAT_091801b8);
      if (lVar10 == 0) {
LAB_074b0c44:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar5,lVar9);
      }
    }
    lVar9 = System_Runtime_Serialization_ObjectManager__FindObjectHolder(param_1,param_3);
    if (lVar9 == 0) {
      lVar9 = thunk_FUN_03f9944c(DAT_09188af0);
      if (param_6 != (long *)0x0) {
        if ((*(byte *)(*param_6 + 0x130) < *(byte *)(DAT_09184518 + 0x130)) ||
           (*(long *)(*(long *)(*param_6 + 200) + (ulong)*(byte *)(DAT_09184518 + 0x130) * 8 + -8)
            != DAT_09184518)) {
LAB_074b0b94:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(param_6);
        }
      }
      System_Runtime_Serialization_ObjectHolder___ctor
                (lVar9,param_2,param_3,param_4,uVar3,param_5,param_6,lVar10,0);
      System_Runtime_Serialization_ObjectManager__AddObjectHolder(param_1,lVar9);
      if (lVar9 == 0) {
LAB_074b0b90:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = System_Runtime_Serialization_ObjectHolder__get_RequiresDelayedFixup(lVar9,0);
      if ((uVar2 & 1) != 0) {
        plVar13 = (long *)System_Runtime_Serialization_ObjectManager__get_SpecialFixupObjects
                                    (param_1);
        if (plVar13 == (long *)0x0) goto LAB_074b0b90;
        (**(code **)(*plVar13 + 0x178))(plVar13,lVar9,*(undefined8 *)(*plVar13 + 0x180));
      }
      lVar9 = *param_1;
    }
    else {
      if (*(long *)(lVar9 + 0x10) != 0) {
        puVar7 = &DAT_091fba68;
        goto LAB_074b0c54;
      }
      if (param_6 != (long *)0x0) {
        if ((*(byte *)(*param_6 + 0x130) < *(byte *)(DAT_09184518 + 0x130)) ||
           (*(long *)(*(long *)(*param_6 + 200) + (ulong)*(byte *)(DAT_09184518 + 0x130) * 8 + -8)
            != DAT_09184518)) goto LAB_074b0b94;
      }
      System_Runtime_Serialization_ObjectHolder__UpdateData
                (lVar9,param_2,param_4,uVar3,param_5,param_6,lVar10,param_1,0);
      if (0 < *(int *)(lVar9 + 0x20)) {
        System_Runtime_Serialization_ObjectManager__CompleteObject(param_1,lVar9,0);
      }
      uVar2 = System_Runtime_Serialization_ObjectHolder__get_RequiresDelayedFixup(lVar9,0);
      if ((uVar2 & 1) != 0) {
        plVar13 = (long *)System_Runtime_Serialization_ObjectManager__get_SpecialFixupObjects
                                    (param_1);
        if (plVar13 == (long *)0x0) goto LAB_074b0b90;
        (**(code **)(*plVar13 + 0x178))(plVar13,lVar9,*(undefined8 *)(*plVar13 + 0x180));
      }
      uVar2 = System_Runtime_Serialization_ObjectHolder__get_CompletelyFixed(lVar9,0);
      if ((uVar2 & 1) != 0) {
        System_Runtime_Serialization_ObjectManager__DoNewlyRegisteredObjectFixups(param_1,lVar9);
        *(undefined8 *)(lVar9 + 0x40) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x40),0);
      }
      iVar1 = System_Runtime_Serialization_ObjectHolder__get_TotalDependentObjects(lVar9,0);
      lVar9 = *param_1;
      if (iVar1 < 1) {
        puVar4 = (undefined8 *)(lVar9 + 0x1f8);
        puVar11 = (undefined8 *)(lVar9 + 0x200);
        goto LAB_074b0b5c;
      }
    }
    puVar4 = (undefined8 *)(lVar9 + 0x1e8);
    puVar11 = (undefined8 *)(lVar9 + 0x1f0);
LAB_074b0b5c:
    (*(code *)*puVar4)(param_1,param_2,*puVar11);
    return;
  }
  if (param_6 != (long *)0x0) {
    lVar9 = *param_6;
    if (((*(byte *)(DAT_0918a3a8 + 0x130) <= *(byte *)(lVar9 + 0x130)) &&
        (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(DAT_0918a3a8 + 0x130) * 8 + -8) ==
         DAT_0918a3a8)) || (lVar9 == DAT_0918a950)) goto LAB_074b0800;
  }
  puVar7 = &DAT_09209cc8;
LAB_074b0c54:
  uVar3 = thunk_FUN_03fc39d4(puVar7);
  uVar3 = System_Environment__GetResourceString(uVar3,0);
  thunk_FUN_03fc39d4(&DAT_0918a948);
  uVar8 = thunk_FUN_03f9944c();
  System_Runtime_Serialization_SerializationException___ctor(uVar8,uVar3);
LAB_074b0c80:
  uVar3 = thunk_FUN_03fc39d4(&DAT_091d4f80);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar3);
}

