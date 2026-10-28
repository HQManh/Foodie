// rea decompile_all
// name: System.DelegateSerializationHolder.DelegateEntry$$DeserializeDelegate
// address: 0x7601da0
// body: available
// range: 0x7601da0-0x7601fef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7601fe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7601fec to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DelegateSerializationHolder_DelegateEntry__DeserializeDelegate
               (long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 local_34;
  
  local_34 = param_3;
  if ((DAT_09521fdd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09172450);
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_0921f5b0);
    DAT_09521fdd = 1;
  }
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == (long *)0x0) {
    lVar4 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    lVar4 = DAT_095353e8;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar3 = System_Type__GetTypeFromHandle(lVar4 + 0x20,0);
    if (param_2 == 0) goto LAB_07601fe4;
    lVar4 = System_Runtime_Serialization_SerializationInfo__GetValue(param_2,uVar2,uVar3,0);
  }
  uVar2 = System_Int32__ToString(&local_34,0);
  uVar3 = System_String__Concat(DAT_0921f5b0,uVar2,0);
  uVar2 = DAT_09172450;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  if (param_2 != 0) {
    plVar1 = (long *)System_Runtime_Serialization_SerializationInfo__GetValueNoThrow
                               (param_2,uVar3,uVar2,0);
    if (plVar1 != (long *)0x0) {
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
         (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
          DAT_09188228)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar1);
      }
    }
    plVar5 = (long *)System_Reflection_Assembly__Load(*(undefined8 *)(param_1 + 0x18),0);
    if (plVar5 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar5 + 0x288))
                        (plVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar5 + 0x290));
      if (lVar4 == 0) {
        uVar6 = System_Reflection_MethodInfo__op_Inequality(plVar1,0,0);
        if ((uVar6 & 1) == 0) {
          plVar1 = (long *)System_Reflection_Assembly__Load(*(undefined8 *)(param_1 + 0x28),0);
          if (plVar1 != (long *)0x0) {
            uVar3 = (**(code **)(*plVar1 + 0x288))
                              (plVar1,*(undefined8 *)(param_1 + 0x30),
                               *(undefined8 *)(*plVar1 + 0x290));
            System_Delegate__CreateDelegate(uVar2,uVar3,*(undefined8 *)(param_1 + 0x38),0,1);
            return;
          }
          goto LAB_07601fe4;
        }
        lVar4 = 0;
      }
      else {
        uVar6 = System_Reflection_MethodInfo__op_Equality();
        if ((uVar6 & 1) != 0) {
          System_Delegate__CreateDelegate(uVar2,lVar4,*(undefined8 *)(param_1 + 0x38),0,1);
          return;
        }
      }
      System_Delegate__CreateDelegate(uVar2,lVar4,plVar1,1,1);
      return;
    }
  }
LAB_07601fe4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

