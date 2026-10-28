// rea decompile_all
// name: System.Runtime.Serialization.SafeSerializationManager$$System.Runtime.Serialization.IObjectReference.GetRealObject
// address: 0x74b3ab4
// body: available
// range: 0x74b3ab4-0x74b3d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b3d84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Runtime_Serialization_SafeSerializationManager__System_Runtime_Serialization_IObjectReference_GetRealObject
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  
  if ((DAT_09521435 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_0918b0e8);
    DAT_09521435 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar7 == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x28);
    uVar8 = *puVar6;
    if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_RuntimeType__op_Equality(uVar8,0,0);
    lVar7 = param_1;
    if ((uVar1 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_03f9944c(DAT_0918b0e8);
      System_Collections_Stack___ctor(plVar2,0);
      if (plVar2 != (long *)0x0) {
        plVar9 = (long *)*puVar6;
        do {
          (**(code **)(*plVar2 + 0x268))(plVar2,plVar9,*(undefined8 *)(*plVar2 + 0x270));
          if (plVar9 == (long *)0x0) goto LAB_074b3d84;
          plVar9 = (long *)(**(code **)(*plVar9 + 0x8a8))(plVar9,*(undefined8 *)(*plVar9 + 0x8b0));
          lVar7 = DAT_095353e8;
          if (plVar9 == (long *)0x0) {
LAB_074b3bdc:
            plVar9 = (long *)0x0;
          }
          else {
            if (*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) goto LAB_074b3bdc;
            if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8
                         ) != DAT_0918a400) {
              plVar9 = (long *)0x0;
            }
          }
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = System_Type__GetTypeFromHandle(lVar7 + 0x20,0);
          uVar1 = System_Type__op_Inequality(plVar9,uVar8,0);
        } while ((uVar1 & 1) != 0);
        do {
          plVar10 = plVar9;
          plVar9 = (long *)(**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
          if (plVar9 == (long *)0x0) goto LAB_074b3d84;
          if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8)
              != DAT_0918a400)) goto LAB_074b3d84;
          plVar3 = (long *)System_RuntimeType__GetSerializationCtor(plVar9,0);
          if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182ac0);
          }
          uVar1 = System_Reflection_ConstructorInfo__op_Inequality(plVar3,0,0);
          if ((uVar1 & 1) == 0) break;
          if (plVar3 == (long *)0x0) goto LAB_074b3d84;
          uVar1 = (**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
        } while ((uVar1 & 1) != 0);
        lVar7 = System_Runtime_Serialization_ObjectManager__GetConstructor(plVar10,0);
        uVar8 = *puVar6;
        if (*(int *)(DAT_09184940 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09184940);
        }
        lVar4 = System_Runtime_Serialization_FormatterServices__GetUninitializedObject(uVar8,0);
        if (lVar7 != 0) {
          puVar5 = (undefined8 *)(param_1 + 0x18);
          System_Reflection_RuntimeConstructorInfo__SerializationInvoke
                    (lVar7,lVar4,*puVar5,param_2,param_3,0);
          *puVar5 = 0;
          thunk_FUN_03f5d7b8(puVar5,0);
          *(undefined8 *)(param_1 + 0x28) = 0;
          thunk_FUN_03f5d7b8(puVar6,0);
          *(long *)(param_1 + 0x20) = lVar4;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),lVar4);
          return lVar4;
        }
      }
LAB_074b3d84:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return lVar7;
}

