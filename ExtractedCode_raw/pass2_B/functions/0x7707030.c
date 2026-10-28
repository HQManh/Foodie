// rea decompile_all
// name: Newtonsoft.Json.Converters.EntityKeyMemberConverter$$WriteJson
// address: 0x7707030
// body: available
// range: 0x7707030-0x770738f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x770728c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770738c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_EntityKeyMemberConverter__WriteJson
               (undefined8 param_1,long *param_2,long param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  long local_58;
  
  if ((DAT_09522965 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183878);
    FUN_03f5c2a4(&DAT_09184078);
    FUN_03f5c2a4(&DAT_09212b98);
    FUN_03f5c2a4(&DAT_09211128);
    FUN_03f5c2a4(&DAT_09206568);
    DAT_09522965 = 1;
  }
  local_58 = 0;
  if (param_3 == 0) {
    if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07707134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x658))(param_2,*(undefined8 *)(*param_2 + 0x660));
      return;
    }
    goto LAB_0770728c;
  }
  System_Object__GetType(param_3,0);
  Newtonsoft_Json_Converters_EntityKeyMemberConverter__EnsureReflectionObject();
  if (param_4 == (long *)0x0) goto LAB_0770728c;
  plVar1 = (long *)(**(code **)(*param_4 + 0x3a8))(param_4,*(undefined8 *)(*param_4 + 0x3b0));
  if (plVar1 == (long *)0x0) {
LAB_07707100:
    plVar1 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09183878 + 0x130)) goto LAB_07707100;
    if (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09183878 + 0x130) * 8 + -8) !=
        DAT_09183878) {
      plVar1 = (long *)0x0;
    }
  }
  if (**(long **)(DAT_09184078 + 0xb8) != 0) {
    plVar2 = (long *)Newtonsoft_Json_Utilities_ReflectionObject__GetValue
                               (**(long **)(DAT_09184078 + 0xb8),param_3,DAT_09206568,0);
    if ((plVar2 != (long *)0x0) && (*plVar2 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar2);
    }
    if (**(long **)(DAT_09184078 + 0xb8) != 0) {
      lVar3 = Newtonsoft_Json_Utilities_ReflectionObject__GetValue
                        (**(long **)(DAT_09184078 + 0xb8),param_3,DAT_09212b98,0);
      if (lVar3 == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = (long *)System_Object__GetType(lVar3,0);
      }
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
        uVar5 = DAT_09206568;
        if (plVar1 != (long *)0x0) {
          uVar5 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetResolvedPropertyName
                            (plVar1,DAT_09206568,0);
        }
        (**(code **)(*param_2 + 0x5d8))(param_2,uVar5,*(undefined8 *)(*param_2 + 0x5e0));
        (**(code **)(*param_2 + 0x698))(param_2,plVar2,*(undefined8 *)(*param_2 + 0x6a0));
        uVar5 = DAT_09211128;
        if (plVar1 != (long *)0x0) {
          uVar5 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetResolvedPropertyName
                            (plVar1,DAT_09211128,0);
        }
        (**(code **)(*param_2 + 0x5d8))(param_2,uVar5,*(undefined8 *)(*param_2 + 0x5e0));
        if (plVar4 == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
        }
        (**(code **)(*param_2 + 0x698))(param_2,uVar5,*(undefined8 *)(*param_2 + 0x6a0));
        uVar5 = DAT_09212b98;
        if (plVar1 != (long *)0x0) {
          uVar5 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetResolvedPropertyName
                            (plVar1,DAT_09212b98,0);
        }
        (**(code **)(*param_2 + 0x5d8))(param_2,uVar5,*(undefined8 *)(*param_2 + 0x5e0));
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_Type__op_Inequality(plVar4,0,0);
        if ((uVar6 & 1) == 0) {
          (**(code **)(*param_2 + 0x658))(param_2,*(undefined8 *)(*param_2 + 0x660));
        }
        else {
          uVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString
                            (lVar3,plVar4,&local_58,0);
          if ((uVar6 & 1) == 0) {
            pcVar7 = *(code **)(*param_2 + 0x8e8);
            uVar5 = *(undefined8 *)(*param_2 + 0x8f0);
          }
          else {
            pcVar7 = *(code **)(*param_2 + 0x698);
            uVar5 = *(undefined8 *)(*param_2 + 0x6a0);
            lVar3 = local_58;
          }
          (*pcVar7)(param_2,lVar3,uVar5);
        }
        (**(code **)(*param_2 + 0x588))(param_2,*(undefined8 *)(*param_2 + 0x590));
        return;
      }
    }
  }
LAB_0770728c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

